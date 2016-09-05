
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(SnailMVC_AppInterface) {

	ZEPHIR_REGISTER_INTERFACE(SnailMVC, AppInterface, snailmvc, appinterface, snailmvc_appinterface_method_entry);

	zend_declare_class_constant_string(snailmvc_appinterface_ce, SL("VERSION"), "1.0.0-dev" TSRMLS_CC);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, get);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, post);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, put);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, head);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, options);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, delete);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, any);

ZEPHIR_DOC_METHOD(SnailMVC_AppInterface, run);

