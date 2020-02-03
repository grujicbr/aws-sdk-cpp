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

#include <aws/mediapackage/model/DescribeHarvestJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHarvestJobResult::DescribeHarvestJobResult() : 
    m_status(Status::NOT_SET)
{
}

DescribeHarvestJobResult::DescribeHarvestJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(Status::NOT_SET)
{
  *this = result;
}

DescribeHarvestJobResult& DescribeHarvestJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("originEndpointId"))
  {
    m_originEndpointId = jsonValue.GetString("originEndpointId");

  }

  if(jsonValue.ValueExists("s3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("s3Destination");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
