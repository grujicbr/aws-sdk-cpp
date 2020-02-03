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
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a time limit for how long the processing job is allowed to
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingStoppingCondition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ProcessingStoppingCondition
  {
  public:
    ProcessingStoppingCondition();
    ProcessingStoppingCondition(Aws::Utils::Json::JsonView jsonValue);
    ProcessingStoppingCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the maximum runtime in seconds.</p>
     */
    inline int GetMaxRuntimeInSeconds() const{ return m_maxRuntimeInSeconds; }

    /**
     * <p>Specifies the maximum runtime in seconds.</p>
     */
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }

    /**
     * <p>Specifies the maximum runtime in seconds.</p>
     */
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }

    /**
     * <p>Specifies the maximum runtime in seconds.</p>
     */
    inline ProcessingStoppingCondition& WithMaxRuntimeInSeconds(int value) { SetMaxRuntimeInSeconds(value); return *this;}

  private:

    int m_maxRuntimeInSeconds;
    bool m_maxRuntimeInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
