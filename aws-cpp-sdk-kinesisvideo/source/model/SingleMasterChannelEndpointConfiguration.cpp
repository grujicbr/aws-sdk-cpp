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

#include <aws/kinesisvideo/model/SingleMasterChannelEndpointConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

SingleMasterChannelEndpointConfiguration::SingleMasterChannelEndpointConfiguration() : 
    m_protocolsHasBeenSet(false),
    m_role(ChannelRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

SingleMasterChannelEndpointConfiguration::SingleMasterChannelEndpointConfiguration(JsonView jsonValue) : 
    m_protocolsHasBeenSet(false),
    m_role(ChannelRole::NOT_SET),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

SingleMasterChannelEndpointConfiguration& SingleMasterChannelEndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocols"))
  {
    Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ChannelProtocolMapper::GetChannelProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = ChannelRoleMapper::GetChannelRoleForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue SingleMasterChannelEndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_protocolsHasBeenSet)
  {
   Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ChannelProtocolMapper::GetNameForChannelProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", ChannelRoleMapper::GetNameForChannelRole(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
