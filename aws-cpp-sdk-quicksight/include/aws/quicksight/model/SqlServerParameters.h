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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>SQL Server parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SqlServerParameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API SqlServerParameters
  {
  public:
    SqlServerParameters();
    SqlServerParameters(Aws::Utils::Json::JsonView jsonValue);
    SqlServerParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Host.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>Host.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>Host.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>Host.</p>
     */
    inline SqlServerParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>Host.</p>
     */
    inline SqlServerParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>Host.</p>
     */
    inline SqlServerParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>Port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port.</p>
     */
    inline SqlServerParameters& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>Database.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>Database.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>Database.</p>
     */
    inline SqlServerParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>Database.</p>
     */
    inline SqlServerParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>Database.</p>
     */
    inline SqlServerParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_database;
    bool m_databaseHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
