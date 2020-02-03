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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/Rule.h>
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
namespace FraudDetector
{
namespace Model
{
  class AWS_FRAUDDETECTOR_API UpdateRuleVersionResult
  {
  public:
    UpdateRuleVersionResult();
    UpdateRuleVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRuleVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new rule version that was created.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>The new rule version that was created.</p>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>The new rule version that was created.</p>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>The new rule version that was created.</p>
     */
    inline UpdateRuleVersionResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>The new rule version that was created.</p>
     */
    inline UpdateRuleVersionResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Rule m_rule;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
