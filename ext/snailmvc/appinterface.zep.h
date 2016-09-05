
extern zend_class_entry *snailmvc_appinterface_ce;

ZEPHIR_INIT_CLASS(SnailMVC_AppInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_get, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_post, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_put, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_head, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_options, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snailmvc_appinterface_any, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snailmvc_appinterface_method_entry) {
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, get, arginfo_snailmvc_appinterface_get)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, post, arginfo_snailmvc_appinterface_post)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, put, arginfo_snailmvc_appinterface_put)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, head, arginfo_snailmvc_appinterface_head)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, options, arginfo_snailmvc_appinterface_options)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, delete, arginfo_snailmvc_appinterface_delete)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, any, arginfo_snailmvc_appinterface_any)
	PHP_ABSTRACT_ME(SnailMVC_AppInterface, run, NULL)
	PHP_FE_END
};
