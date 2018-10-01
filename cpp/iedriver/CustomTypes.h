// Licensed to the Software Freedom Conservancy (SFC) under one
// or more contributor license agreements. See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership. The SFC licenses this file
// to you under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WEBDRIVER_CUSTOMTYPES_H_
#define WEBDRIVER_CUSTOMTYPES_H_

#include <memory>

#define IGNORE_UNEXPECTED_ALERTS "ignore"
#define ACCEPT_UNEXPECTED_ALERTS "accept"
#define DISMISS_UNEXPECTED_ALERTS "dismiss"
#define ACCEPT_AND_NOTIFY_UNEXPECTED_ALERTS "accept and notify"
#define DISMISS_AND_NOTIFY_UNEXPECTED_ALERTS "dismiss and notify"
#define NORMAL_PAGE_LOAD_STRATEGY "normal"
#define EAGER_PAGE_LOAD_STRATEGY "eager"
#define NONE_PAGE_LOAD_STRATEGY "none"

namespace webdriver {

class Element;
typedef std::shared_ptr<Element> ElementHandle;

class DocumentHost;
typedef std::shared_ptr<DocumentHost> BrowserHandle;

} // namespace webdriver

#endif // WEBDRIVER_CUSTOMTYPES_H_
