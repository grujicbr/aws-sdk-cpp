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

#include <aws/marketplace-catalog/model/EntitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

EntitySummary::EntitySummary() : 
    m_nameHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_visibilityHasBeenSet(false)
{
}

EntitySummary::EntitySummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

EntitySummary& EntitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = jsonValue.GetString("EntityType");

    m_entityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");

    m_entityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = jsonValue.GetString("Visibility");

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("EntityType", m_entityType);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_entityArnHasBeenSet)
  {
   payload.WithString("EntityArn", m_entityArn);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", m_visibility);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
