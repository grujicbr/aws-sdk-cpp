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

#include <aws/docdb/model/CreateDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

CreateDBInstanceRequest::CreateDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false)
{
}

Aws::String CreateDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_promotionTierHasBeenSet)
  {
    ss << "PromotionTier=" << m_promotionTier << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
