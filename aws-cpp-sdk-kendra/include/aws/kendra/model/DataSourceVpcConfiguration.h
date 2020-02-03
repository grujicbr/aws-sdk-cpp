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

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information for connecting to an Amazon VPC.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DataSourceVpcConfiguration
  {
  public:
    DataSourceVpcConfiguration();
    DataSourceVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DataSourceVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
