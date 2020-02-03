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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/TopicRuleDestinationConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CreateTopicRuleDestinationRequest : public IoTRequest
  {
  public:
    CreateTopicRuleDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopicRuleDestination"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline const TopicRuleDestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }

    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline void SetDestinationConfiguration(const TopicRuleDestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }

    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline void SetDestinationConfiguration(TopicRuleDestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }

    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline CreateTopicRuleDestinationRequest& WithDestinationConfiguration(const TopicRuleDestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>The topic rule destination configuration.</p>
     */
    inline CreateTopicRuleDestinationRequest& WithDestinationConfiguration(TopicRuleDestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}

  private:

    TopicRuleDestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
