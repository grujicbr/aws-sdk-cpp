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

#include <aws/rds/model/ModifyDBClusterEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBClusterEndpointRequest::ModifyDBClusterEndpointRequest() : 
    m_dBClusterEndpointIdentifierHasBeenSet(false),
    m_endpointTypeHasBeenSet(false),
    m_staticMembersHasBeenSet(false),
    m_excludedMembersHasBeenSet(false)
{
}

Aws::String ModifyDBClusterEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBClusterEndpoint&";
  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
    ss << "DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }

  if(m_endpointTypeHasBeenSet)
  {
    ss << "EndpointType=" << StringUtils::URLEncode(m_endpointType.c_str()) << "&";
  }

  if(m_staticMembersHasBeenSet)
  {
    unsigned staticMembersCount = 1;
    for(auto& item : m_staticMembers)
    {
      ss << "StaticMembers.member." << staticMembersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      staticMembersCount++;
    }
  }

  if(m_excludedMembersHasBeenSet)
  {
    unsigned excludedMembersCount = 1;
    for(auto& item : m_excludedMembers)
    {
      ss << "ExcludedMembers.member." << excludedMembersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      excludedMembersCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBClusterEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
