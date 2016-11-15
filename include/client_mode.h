/*
 * Copyright (c) 2016 Shanghai Jiao Tong University.
 *     All rights reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an "AS
 *  IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 *  express or implied.  See the License for the specific language
 *  governing permissions and limitations under the License.
 *
 * For more about this software visit:
 *
 *      http://ipads.se.sjtu.edu.cn/projects/wukong.html
 *
 */

#include <iostream>
#include "utils.h"
#include "global_cfg.h"
#include "thread_cfg.h"
#include "client.h"
#include "batch_logger.h"
#include "proxy.h"

#include <boost/unordered_map.hpp>
#include <set>

using namespace std;

void single_execute(client *clnt, string filename, int execute_count);
void batch_execute(client *clnt, string mix_config, batch_logger &logger);
void nonblocking_execute(client *clnt, string mix_config, batch_logger &logger);

void interactive_shell(client *clnt);

void proxy(client *clnt, int port);
void *recv_cmd(void *proxy);
void *send_cmd(void *proxy);