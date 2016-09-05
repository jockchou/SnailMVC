
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "snailmvc.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *snailmvc_appinterface_ce;

ZEND_DECLARE_MODULE_GLOBALS(snailmvc)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(snailmvc)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(SnailMVC_AppInterface);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(snailmvc)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_snailmvc_globals *snailmvc_globals TSRMLS_DC)
{
	snailmvc_globals->initialized = 0;

	/* Memory options */
	snailmvc_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	snailmvc_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	snailmvc_globals->cache_enabled = 1;

	/* Recursive Lock */
	snailmvc_globals->recursive_lock = 0;

	/* Static cache */
	memset(snailmvc_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_snailmvc_globals *snailmvc_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(snailmvc)
{

	zend_snailmvc_globals *snailmvc_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(snailmvc_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(snailmvc_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(snailmvc)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(snailmvc)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_SNAILMVC_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_SNAILMVC_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_SNAILMVC_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_SNAILMVC_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_SNAILMVC_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(snailmvc)
{
	php_zephir_init_globals(snailmvc_globals TSRMLS_CC);
	php_zephir_init_module_globals(snailmvc_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(snailmvc)
{

}


zend_function_entry php_snailmvc_functions[] = {
ZEND_FE_END

};

zend_module_entry snailmvc_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_SNAILMVC_EXTNAME,
	php_snailmvc_functions,
	PHP_MINIT(snailmvc),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(snailmvc),
#else
	NULL,
#endif
	PHP_RINIT(snailmvc),
	PHP_RSHUTDOWN(snailmvc),
	PHP_MINFO(snailmvc),
	PHP_SNAILMVC_VERSION,
	ZEND_MODULE_GLOBALS(snailmvc),
	PHP_GINIT(snailmvc),
	PHP_GSHUTDOWN(snailmvc),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_SNAILMVC
ZEND_GET_MODULE(snailmvc)
#endif
