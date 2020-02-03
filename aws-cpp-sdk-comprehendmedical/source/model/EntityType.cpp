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

#include <aws/comprehendmedical/model/EntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace EntityTypeMapper
      {

        static const int MEDICATION_HASH = HashingUtils::HashString("MEDICATION");
        static const int MEDICAL_CONDITION_HASH = HashingUtils::HashString("MEDICAL_CONDITION");
        static const int PROTECTED_HEALTH_INFORMATION_HASH = HashingUtils::HashString("PROTECTED_HEALTH_INFORMATION");
        static const int TEST_TREATMENT_PROCEDURE_HASH = HashingUtils::HashString("TEST_TREATMENT_PROCEDURE");
        static const int ANATOMY_HASH = HashingUtils::HashString("ANATOMY");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDICATION_HASH)
          {
            return EntityType::MEDICATION;
          }
          else if (hashCode == MEDICAL_CONDITION_HASH)
          {
            return EntityType::MEDICAL_CONDITION;
          }
          else if (hashCode == PROTECTED_HEALTH_INFORMATION_HASH)
          {
            return EntityType::PROTECTED_HEALTH_INFORMATION;
          }
          else if (hashCode == TEST_TREATMENT_PROCEDURE_HASH)
          {
            return EntityType::TEST_TREATMENT_PROCEDURE;
          }
          else if (hashCode == ANATOMY_HASH)
          {
            return EntityType::ANATOMY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::MEDICATION:
            return "MEDICATION";
          case EntityType::MEDICAL_CONDITION:
            return "MEDICAL_CONDITION";
          case EntityType::PROTECTED_HEALTH_INFORMATION:
            return "PROTECTED_HEALTH_INFORMATION";
          case EntityType::TEST_TREATMENT_PROCEDURE:
            return "TEST_TREATMENT_PROCEDURE";
          case EntityType::ANATOMY:
            return "ANATOMY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
