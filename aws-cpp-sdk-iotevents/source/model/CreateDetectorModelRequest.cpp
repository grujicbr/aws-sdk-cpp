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

#include <aws/iotevents/model/CreateDetectorModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDetectorModelRequest::CreateDetectorModelRequest() : 
    m_detectorModelNameHasBeenSet(false),
    m_detectorModelDefinitionHasBeenSet(false),
    m_detectorModelDescriptionHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_evaluationMethod(EvaluationMethod::NOT_SET),
    m_evaluationMethodHasBeenSet(false)
{
}

Aws::String CreateDetectorModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorModelNameHasBeenSet)
  {
   payload.WithString("detectorModelName", m_detectorModelName);

  }

  if(m_detectorModelDefinitionHasBeenSet)
  {
   payload.WithObject("detectorModelDefinition", m_detectorModelDefinition.Jsonize());

  }

  if(m_detectorModelDescriptionHasBeenSet)
  {
   payload.WithString("detectorModelDescription", m_detectorModelDescription);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_evaluationMethodHasBeenSet)
  {
   payload.WithString("evaluationMethod", EvaluationMethodMapper::GetNameForEvaluationMethod(m_evaluationMethod));
  }

  return payload.View().WriteReadable();
}




