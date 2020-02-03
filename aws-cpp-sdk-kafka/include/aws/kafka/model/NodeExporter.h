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
#include <aws/kafka/Kafka_EXPORTS.h>

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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Indicates whether you want to enable or disable the Node
   * Exporter.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/NodeExporter">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API NodeExporter
  {
  public:
    NodeExporter();
    NodeExporter(Aws::Utils::Json::JsonView jsonValue);
    NodeExporter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Indicates whether you want to enable or disable the Node
     * Exporter.</p>
         
     */
    inline bool GetEnabledInBroker() const{ return m_enabledInBroker; }

    /**
     * 
            <p>Indicates whether you want to enable or disable the Node
     * Exporter.</p>
         
     */
    inline bool EnabledInBrokerHasBeenSet() const { return m_enabledInBrokerHasBeenSet; }

    /**
     * 
            <p>Indicates whether you want to enable or disable the Node
     * Exporter.</p>
         
     */
    inline void SetEnabledInBroker(bool value) { m_enabledInBrokerHasBeenSet = true; m_enabledInBroker = value; }

    /**
     * 
            <p>Indicates whether you want to enable or disable the Node
     * Exporter.</p>
         
     */
    inline NodeExporter& WithEnabledInBroker(bool value) { SetEnabledInBroker(value); return *this;}

  private:

    bool m_enabledInBroker;
    bool m_enabledInBrokerHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
