//
//  AUCInterface.h
//  Aural
//
//  Created by Karl Stenerud on 2/19/11.
//
// Copyright 2011 Karl Stenerud
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Note: You are NOT required to make the license available from within your
// iOS application. Including it in your project is sufficient.
//
// Attribution is not required, but appreciated :)
//

#define DECLARE_INTERFACE(INTF_NAME) \
struct INTF_NAME##_; \
typedef struct INTF_NAME##_ INTF_NAME

#define DEFINE_INTERFACE(INTF_NAME) \
struct INTF_NAME##_

#define DECLARE_AND_DEFINE_INTERFACE(INTF_NAME) \
DECLARE_INTERFACE(INTF_NAME); \
DEFINE_INTERFACE(INTF_NAME)

#define DECLARE_GETTER_SETTER(TYPE, NAME) \
static TYPE self_get##NAME(AUCAudioSource* self); \
static void self_set##NAME(AUCAudioSource* self, TYPE NAME)

#define ASSIGN_GETTER_SETTER(NAME) \
self->get##NAME = self_get##NAME; \
self->set##NAME = self_set##NAME
