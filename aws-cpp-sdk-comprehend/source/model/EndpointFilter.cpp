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

#include <aws/comprehend/model/EndpointFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EndpointFilter::EndpointFilter() : 
    m_modelArnHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false)
{
}

EndpointFilter::EndpointFilter(JsonView jsonValue) : 
    m_modelArnHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointFilter& EndpointFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeBefore"))
  {
    m_creationTimeBefore = jsonValue.GetDouble("CreationTimeBefore");

    m_creationTimeBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeAfter"))
  {
    m_creationTimeAfter = jsonValue.GetDouble("CreationTimeAfter");

    m_creationTimeAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointFilter::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("ModelArn", m_modelArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EndpointStatusMapper::GetNameForEndpointStatus(m_status));
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
