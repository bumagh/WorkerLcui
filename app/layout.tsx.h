/** This file is generated from layout.tsx */
#include <ui.h>
#include "../vendor.node_modules/@lcui/react-icons/dist/style.css.h"
#include "global.css.h"

// UTF-8 encoded string from: %E5%B7%A5%E4%BD%9C%E5%8F%B0
static const unsigned char widget_text_0[] = {0xe5, 0xb7, 0xa5, 0xe4, 0xbd, 0x9c, 0xe5, 0x8f, 0xb0, 0};
// UTF-8 encoded string from: %E5%85%B3%E4%BA%8E
static const unsigned char widget_text_1[] = {0xe5, 0x85, 0xb3, 0xe4, 0xba, 0x8e, 0};

typedef struct root_layout_react_state {
        char empty;
} root_layout_react_state_t;

typedef struct root_layout_react {
        root_layout_react_state_t state;
} root_layout_react_t;

static ui_widget_prototype_t *root_layout_proto;

static void root_layout_init_prototype(void)
{
        root_layout_proto = ui_create_widget_prototype("root_layout", NULL);
}

static void root_layout_load_template(ui_widget_t *parent)
{
        ui_widget_t *w[4];

        ui_widget_add_class(parent, "w-full h-full");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "bg-slate-200 flex justify-center pt-1");
        w[1] = ui_create_widget("router-link");
        ui_widget_set_attr(w[1], "to", "/");
        ui_widget_set_attr(w[1], "active-class", "bg-white");
        ui_widget_set_attr(w[1], "exact", "exact");
        ui_widget_set_attr(w[1], "exact-active-class", "");
        ui_widget_add_class(w[1], "px-6 py-2 text-sm rounded-t mx-1");
        ui_widget_set_text(w[1], (const char*)widget_text_0);
        w[2] = ui_create_widget("router-link");
        ui_widget_set_attr(w[2], "to", "/about");
        ui_widget_set_attr(w[2], "active-class", "bg-white");
        ui_widget_set_attr(w[2], "exact", "exact");
        ui_widget_set_attr(w[2], "exact-active-class", "");
        ui_widget_add_class(w[2], "px-6 py-2 text-sm rounded-t mx-1");
        ui_widget_set_text(w[2], (const char*)widget_text_1);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], w[2]);
        w[3] = ui_create_widget("router-view");
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, w[3]);
}

static void root_layout_react_update(ui_widget_t *w)
{
        root_layout_react_t *_that = ui_widget_get_data(w, root_layout_proto);
}

static void root_layout_react_init(ui_widget_t *w)
{
        root_layout_react_t *_that = ui_widget_get_data(w, root_layout_proto);
        root_layout_load_template(w);
}

static void root_layout_react_destroy(ui_widget_t *w)
{
}

void ui_load_root_layout_resources(void)
{
        ui_load_css_string(css_str_style, "style.css");
        ui_load_css_string(css_str_global, "global.css");
}
