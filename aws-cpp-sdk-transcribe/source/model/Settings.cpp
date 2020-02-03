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

#include <aws/transcribe/model/Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Settings::Settings() : 
    m_vocabularyNameHasBeenSet(false),
    m_showSpeakerLabels(false),
    m_showSpeakerLabelsHasBeenSet(false),
    m_maxSpeakerLabels(0),
    m_maxSpeakerLabelsHasBeenSet(false),
    m_channelIdentification(false),
    m_channelIdentificationHasBeenSet(false),
    m_showAlternatives(false),
    m_showAlternativesHasBeenSet(false),
    m_maxAlternatives(0),
    m_maxAlternativesHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false)
{
}

Settings::Settings(JsonView jsonValue) : 
    m_vocabularyNameHasBeenSet(false),
    m_showSpeakerLabels(false),
    m_showSpeakerLabelsHasBeenSet(false),
    m_maxSpeakerLabels(0),
    m_maxSpeakerLabelsHasBeenSet(false),
    m_channelIdentification(false),
    m_channelIdentificationHasBeenSet(false),
    m_showAlternatives(false),
    m_showAlternativesHasBeenSet(false),
    m_maxAlternatives(0),
    m_maxAlternativesHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false)
{
  *this = jsonValue;
}

Settings& Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShowSpeakerLabels"))
  {
    m_showSpeakerLabels = jsonValue.GetBool("ShowSpeakerLabels");

    m_showSpeakerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSpeakerLabels"))
  {
    m_maxSpeakerLabels = jsonValue.GetInteger("MaxSpeakerLabels");

    m_maxSpeakerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelIdentification"))
  {
    m_channelIdentification = jsonValue.GetBool("ChannelIdentification");

    m_channelIdentificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShowAlternatives"))
  {
    m_showAlternatives = jsonValue.GetBool("ShowAlternatives");

    m_showAlternativesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAlternatives"))
  {
    m_maxAlternatives = jsonValue.GetInteger("MaxAlternatives");

    m_maxAlternativesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");

    m_vocabularyFilterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));

    m_vocabularyFilterMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue Settings::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_showSpeakerLabelsHasBeenSet)
  {
   payload.WithBool("ShowSpeakerLabels", m_showSpeakerLabels);

  }

  if(m_maxSpeakerLabelsHasBeenSet)
  {
   payload.WithInteger("MaxSpeakerLabels", m_maxSpeakerLabels);

  }

  if(m_channelIdentificationHasBeenSet)
  {
   payload.WithBool("ChannelIdentification", m_channelIdentification);

  }

  if(m_showAlternativesHasBeenSet)
  {
   payload.WithBool("ShowAlternatives", m_showAlternatives);

  }

  if(m_maxAlternativesHasBeenSet)
  {
   payload.WithInteger("MaxAlternatives", m_maxAlternatives);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
