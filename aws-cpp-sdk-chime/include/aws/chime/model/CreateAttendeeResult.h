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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Attendee.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API CreateAttendeeResult
  {
  public:
    CreateAttendeeResult();
    CreateAttendeeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAttendeeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline const Attendee& GetAttendee() const{ return m_attendee; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline void SetAttendee(const Attendee& value) { m_attendee = value; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline void SetAttendee(Attendee&& value) { m_attendee = std::move(value); }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline CreateAttendeeResult& WithAttendee(const Attendee& value) { SetAttendee(value); return *this;}

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline CreateAttendeeResult& WithAttendee(Attendee&& value) { SetAttendee(std::move(value)); return *this;}

  private:

    Attendee m_attendee;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
