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

#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace RecoveryPointStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        RecoveryPointStatus GetRecoveryPointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return RecoveryPointStatus::COMPLETED;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return RecoveryPointStatus::PARTIAL;
          }
          else if (hashCode == DELETING_HASH)
          {
            return RecoveryPointStatus::DELETING;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return RecoveryPointStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryPointStatus>(hashCode);
          }

          return RecoveryPointStatus::NOT_SET;
        }

        Aws::String GetNameForRecoveryPointStatus(RecoveryPointStatus enumValue)
        {
          switch(enumValue)
          {
          case RecoveryPointStatus::COMPLETED:
            return "COMPLETED";
          case RecoveryPointStatus::PARTIAL:
            return "PARTIAL";
          case RecoveryPointStatus::DELETING:
            return "DELETING";
          case RecoveryPointStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryPointStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
