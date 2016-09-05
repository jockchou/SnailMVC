
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_SNAILMVC_H
#define PHP_SNAILMVC_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_SNAILMVC_NAME        "snailmvc"
#define PHP_SNAILMVC_VERSION     "0.0.1"
#define PHP_SNAILMVC_EXTNAME     "snailmvc"
#define PHP_SNAILMVC_AUTHOR      ""
#define PHP_SNAILMVC_ZEPVERSION  "0.9.4a-dev-cbfe80715d"
#define PHP_SNAILMVC_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(snailmvc)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(snailmvc)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(snailmvc)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(snailmvc_globals_id, zend_snailmvc_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (snailmvc_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_snailmvc_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(snailmvc_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(snailmvc_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def snailmvc_globals
#define zend_zephir_globals_def zend_snailmvc_globals

extern zend_module_entry snailmvc_module_entry;
#define phpext_snailmvc_ptr &snailmvc_module_entry

#endif
