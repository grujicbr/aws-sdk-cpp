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

#include <aws/ec2/model/NetworkInterfaceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace NetworkInterfaceTypeMapper
      {

        static const int interface_HASH = HashingUtils::HashString("interface");
        static const int natGateway_HASH = HashingUtils::HashString("natGateway");
        static const int efa_HASH = HashingUtils::HashString("efa");


        NetworkInterfaceType GetNetworkInterfaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == interface_HASH)
          {
            return NetworkInterfaceType::interface;
          }
          else if (hashCode == natGateway_HASH)
          {
            return NetworkInterfaceType::natGateway;
          }
          else if (hashCode == efa_HASH)
          {
            return NetworkInterfaceType::efa;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceType>(hashCode);
          }

          return NetworkInterfaceType::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceType(NetworkInterfaceType enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceType::interface:
            return "interface";
          case NetworkInterfaceType::natGateway:
            return "natGateway";
          case NetworkInterfaceType::efa:
            return "efa";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
