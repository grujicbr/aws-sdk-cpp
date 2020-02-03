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

#include <aws/iot/model/AuditMitigationActionsExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuditMitigationActionsExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        AuditMitigationActionsExecutionStatus GetAuditMitigationActionsExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AuditMitigationActionsExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::CANCELED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::SKIPPED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return AuditMitigationActionsExecutionStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditMitigationActionsExecutionStatus>(hashCode);
          }

          return AuditMitigationActionsExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForAuditMitigationActionsExecutionStatus(AuditMitigationActionsExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditMitigationActionsExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AuditMitigationActionsExecutionStatus::COMPLETED:
            return "COMPLETED";
          case AuditMitigationActionsExecutionStatus::FAILED:
            return "FAILED";
          case AuditMitigationActionsExecutionStatus::CANCELED:
            return "CANCELED";
          case AuditMitigationActionsExecutionStatus::SKIPPED:
            return "SKIPPED";
          case AuditMitigationActionsExecutionStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditMitigationActionsExecutionStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
