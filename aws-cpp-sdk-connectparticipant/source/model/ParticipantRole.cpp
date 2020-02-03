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

#include <aws/connectparticipant/model/ParticipantRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ParticipantRoleMapper
      {

        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");


        ParticipantRole GetParticipantRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_HASH)
          {
            return ParticipantRole::AGENT;
          }
          else if (hashCode == CUSTOMER_HASH)
          {
            return ParticipantRole::CUSTOMER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return ParticipantRole::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantRole>(hashCode);
          }

          return ParticipantRole::NOT_SET;
        }

        Aws::String GetNameForParticipantRole(ParticipantRole enumValue)
        {
          switch(enumValue)
          {
          case ParticipantRole::AGENT:
            return "AGENT";
          case ParticipantRole::CUSTOMER:
            return "CUSTOMER";
          case ParticipantRole::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantRoleMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
