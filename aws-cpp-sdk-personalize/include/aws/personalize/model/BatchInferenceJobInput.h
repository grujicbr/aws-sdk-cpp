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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/S3DataConfig.h>
#include <utility>

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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The input configuration of a batch inference job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJobInput">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API BatchInferenceJobInput
  {
  public:
    BatchInferenceJobInput();
    BatchInferenceJobInput(Aws::Utils::Json::JsonView jsonValue);
    BatchInferenceJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline const S3DataConfig& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline void SetS3DataSource(const S3DataConfig& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline void SetS3DataSource(S3DataConfig&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline BatchInferenceJobInput& WithS3DataSource(const S3DataConfig& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline BatchInferenceJobInput& WithS3DataSource(S3DataConfig&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    S3DataConfig m_s3DataSource;
    bool m_s3DataSourceHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
