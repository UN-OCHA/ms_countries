## Microservices

Microservices is a suite of Drupal features (prefixed by ms_) which have been created in the context of the
Humanitarian Hub and can be reused by other entities to easily integrate taxonomies which are pulled and
synchronized from sites which belong to the Humanitarian Hub.

More documentation concerning the full suite of modules can be found [here](https://github.com/un-ocha/ms_core).

This module provides a local taxonomy (ms_countries) which content is synchronized with the list of countries available in [vocabulary.unocha.org](http://vocabulary.unocha.org). The ISO 2 of the countries is used as a unique key to update the terms in the local taxonomy with the terms which come from [vocabulary.unocha.org](http://vocabulary.unocha.org).

The local taxonomy is updated whenever cron runs on the local website. It is up to the website administrator to determine how frequently cron should run.
