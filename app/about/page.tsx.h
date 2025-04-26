/** This file is generated from page.tsx */
#include <ui.h>
#include "styles.module.scss.h"

// UTF-8 encoded string from: %E6%B2%83%E5%AE%A2%E5%B7%A5%E4%BD%9C%E5%8F%B0
static const unsigned char widget_text_0[] = {0xe6, 0xb2, 0x83, 0xe5, 0xae, 0xa2, 0xe5, 0xb7, 0xa5, 0xe4, 0xbd, 0x9c, 0xe5, 0x8f, 0xb0, 0};
// UTF-8 encoded string from: 0.2.0
static const unsigned char widget_text_1[] = {0x30, 0x2e, 0x32, 0x2e, 0x30, 0};
// UTF-8 encoded string from: %E5%8D%8E%E6%A2%A6%E5%AE%98%E7%BD%91
static const unsigned char widget_text_2[] = {0xe5, 0x8d, 0x8e, 0xe6, 0xa2, 0xa6, 0xe5, 0xae, 0x98, 0xe7, 0xbd, 0x91, 0};
// UTF-8 encoded string from: %EE%83%AA
static const unsigned char widget_text_3[] = {0xee, 0x83, 0xaa, 0};

typedef struct {
        ui_widget_t *lcui_version;
        ui_widget_t *ref_1;
} about_page_refs_t;

typedef struct about_page_react_state {
        char empty;
} about_page_react_state_t;

typedef struct about_page_react {
        about_page_react_state_t state;
        about_page_refs_t refs;
} about_page_react_t;

static ui_widget_prototype_t *about_page_proto;

static void about_page_init_prototype(void)
{
        about_page_proto = ui_create_widget_prototype("about_page", NULL);
}

static void about_page_load_template(ui_widget_t *parent, about_page_refs_t *refs)
{
        ui_widget_t *w[9];

        ui_widget_add_class(parent, "container");
        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "_about_1hw5p_1");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "_item_1hw5p_8");
        w[2] = ui_create_widget(NULL);
        ui_widget_add_class(w[2], "_icon_1hw5p_36");
        w[3] = ui_create_widget("text");
        ui_widget_add_class(w[3], "_name_1hw5p_46");
        ui_widget_set_text(w[3], (const char*)widget_text_0);
        ui_widget_append(w[1], w[2]);
        ui_widget_append(w[1], w[3]);
        w[4] = ui_create_widget(NULL);
        ui_widget_add_class(w[4], "_item_1hw5p_8");
        w[5] = ui_create_widget(NULL);
        ui_widget_add_class(w[5], "_meta_1hw5p_28");
        w[6] = ui_create_widget("text");
        ui_widget_set_text(w[6], (const char*)widget_text_1);
        refs->lcui_version = ui_create_widget("text");
        ui_widget_append(w[5], w[6]);
        ui_widget_append(w[5], refs->lcui_version);
        ui_widget_append(w[4], w[5]);
        w[7] = ui_create_widget("a");
        ui_widget_add_class(w[7], "_item_1hw5p_8");
        ui_widget_set_attr(w[7], "href", "https://hmx.asia");
        w[8] = ui_create_widget("text");
        ui_widget_set_text(w[8], (const char*)widget_text_2);
        refs->ref_1 = ui_create_widget("text");
        ui_widget_add_class(refs->ref_1, "fui-icon-regular");
        ui_widget_set_text(refs->ref_1, (const char*)widget_text_3);
        ui_widget_append(w[7], w[8]);
        ui_widget_append(w[7], refs->ref_1);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], w[4]);
        ui_widget_append(w[0], w[7]);
        ui_widget_append(parent, w[0]);
}

static void about_page_react_update(ui_widget_t *w)
{
        about_page_react_t *_that = ui_widget_get_data(w, about_page_proto);
}

static void about_page_react_init(ui_widget_t *w)
{
        about_page_react_t *_that = ui_widget_get_data(w, about_page_proto);
        about_page_load_template(w, &_that->refs);
}

static void about_page_react_destroy(ui_widget_t *w)
{
}

void ui_load_about_page_resources(void)
{
        ui_load_css_string(css_str_styles_module, "styles.module.scss");
}
