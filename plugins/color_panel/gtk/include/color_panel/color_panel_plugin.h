// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef PLUGINS_COLOR_PANEL_LINUX_COLOR_PANEL_PLUGIN_H_
#define PLUGINS_COLOR_PANEL_LINUX_COLOR_PANEL_PLUGIN_H_

// A plugin for communicating with a native color picker panel.

#include <flutter_linux/flutter_linux.h>

G_BEGIN_DECLS

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __attribute__((visibility("default")))
#else
#define FLUTTER_PLUGIN_EXPORT
#endif

#define COLOR_PANEL_PLUGIN(obj)                                     \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), color_panel_plugin_get_type(), \
                              ColorPanelPlugin))

typedef struct _ColorPanelPlugin ColorPanelPlugin;
typedef struct {
  GObjectClass parent_class;
} ColorPanelPluginClass;

FLUTTER_PLUGIN_EXPORT GType color_panel_plugin_get_type();

FLUTTER_PLUGIN_EXPORT ColorPanelPlugin* color_panel_plugin_new(
    FlPluginRegistrar* registrar);

FLUTTER_PLUGIN_EXPORT void color_panel_plugin_register_with_registrar(
    FlPluginRegistrar* registrar);

G_END_DECLS

#endif  // PLUGINS_COLOR_PANEL_LINUX_COLOR_PANEL_PLUGIN_H_
