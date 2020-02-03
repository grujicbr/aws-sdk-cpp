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

#include <aws/alexaforbusiness/model/CreateEndOfMeetingReminder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

CreateEndOfMeetingReminder::CreateEndOfMeetingReminder() : 
    m_reminderAtMinutesHasBeenSet(false),
    m_reminderType(EndOfMeetingReminderType::NOT_SET),
    m_reminderTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

CreateEndOfMeetingReminder::CreateEndOfMeetingReminder(JsonView jsonValue) : 
    m_reminderAtMinutesHasBeenSet(false),
    m_reminderType(EndOfMeetingReminderType::NOT_SET),
    m_reminderTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

CreateEndOfMeetingReminder& CreateEndOfMeetingReminder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReminderAtMinutes"))
  {
    Array<JsonView> reminderAtMinutesJsonList = jsonValue.GetArray("ReminderAtMinutes");
    for(unsigned reminderAtMinutesIndex = 0; reminderAtMinutesIndex < reminderAtMinutesJsonList.GetLength(); ++reminderAtMinutesIndex)
    {
      m_reminderAtMinutes.push_back(reminderAtMinutesJsonList[reminderAtMinutesIndex].AsInteger());
    }
    m_reminderAtMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReminderType"))
  {
    m_reminderType = EndOfMeetingReminderTypeMapper::GetEndOfMeetingReminderTypeForName(jsonValue.GetString("ReminderType"));

    m_reminderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateEndOfMeetingReminder::Jsonize() const
{
  JsonValue payload;

  if(m_reminderAtMinutesHasBeenSet)
  {
   Array<JsonValue> reminderAtMinutesJsonList(m_reminderAtMinutes.size());
   for(unsigned reminderAtMinutesIndex = 0; reminderAtMinutesIndex < reminderAtMinutesJsonList.GetLength(); ++reminderAtMinutesIndex)
   {
     reminderAtMinutesJsonList[reminderAtMinutesIndex].AsInteger(m_reminderAtMinutes[reminderAtMinutesIndex]);
   }
   payload.WithArray("ReminderAtMinutes", std::move(reminderAtMinutesJsonList));

  }

  if(m_reminderTypeHasBeenSet)
  {
   payload.WithString("ReminderType", EndOfMeetingReminderTypeMapper::GetNameForEndOfMeetingReminderType(m_reminderType));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
