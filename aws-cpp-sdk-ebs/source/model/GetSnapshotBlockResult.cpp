﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ebs/model/GetSnapshotBlockResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetSnapshotBlockResult::GetSnapshotBlockResult() : 
    m_dataLength(0),
    m_checksumAlgorithm(ChecksumAlgorithm::NOT_SET)
{
}

GetSnapshotBlockResult::GetSnapshotBlockResult(GetSnapshotBlockResult&& toMove) : 
    m_dataLength(toMove.m_dataLength),
    m_blockData(std::move(toMove.m_blockData)),
    m_checksum(std::move(toMove.m_checksum)),
    m_checksumAlgorithm(toMove.m_checksumAlgorithm)
{
}

GetSnapshotBlockResult& GetSnapshotBlockResult::operator=(GetSnapshotBlockResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_dataLength = toMove.m_dataLength;
   m_blockData = std::move(toMove.m_blockData);
   m_checksum = std::move(toMove.m_checksum);
   m_checksumAlgorithm = toMove.m_checksumAlgorithm;

   return *this;
}

GetSnapshotBlockResult::GetSnapshotBlockResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_dataLength(0),
    m_checksumAlgorithm(ChecksumAlgorithm::NOT_SET)
{
  *this = std::move(result);
}

GetSnapshotBlockResult& GetSnapshotBlockResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_blockData = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& dataLengthIter = headers.find("x-amz-data-length");
  if(dataLengthIter != headers.end())
  {
     m_dataLength = StringUtils::ConvertToInt32(dataLengthIter->second.c_str());
  }

  const auto& checksumIter = headers.find("x-amz-checksum");
  if(checksumIter != headers.end())
  {
    m_checksum = checksumIter->second;
  }

  const auto& checksumAlgorithmIter = headers.find("x-amz-checksum-algorithm");
  if(checksumAlgorithmIter != headers.end())
  {
    m_checksumAlgorithm = ChecksumAlgorithmMapper::GetChecksumAlgorithmForName(checksumAlgorithmIter->second);
  }

   return *this;
}
