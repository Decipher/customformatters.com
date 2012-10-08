CustomFormatters.com is an online repository of user-contributed snippets for use with the [Custom Formatters module](https://drupal.org/project/custom_formatters) for Drupal.



Quickstart with Drush Make
--------------------------------------------------------------------------------

### 1. Build the Stack ###


To setup a local copy of [CustomFormatters.com](http://customformatters.com), run the following [Drush Make](https://drupal.org/project/drush_make) command:

    $ drush make https://raw.github.com/Decipher/customformatters.com/0.4/stub.make


Alternatively, you can clone the github repo

    $ git clone git://github.com/Decipher/customformatters.com.git

then build from the included stub file:

    $ drush make customformatters.com/stub.make customformatters.com


### 2. Install Drupal using the customformatters.com installation profile ###


You can install the site in your browser, or via drush

    $ drush site-install cf_profile --db-url=mysql://user:pass@localhost/database_name


**Note:** you may need to manually create sites/default/settings.php with your database
credentials to complete the installation process, whichever method you use.




Roadmap
--------------------------------------------------------------------------------

0.4
- User roles: Contributor & Administrator
- Workflow/Moderation



Getting involved
--------------------------------------------------------------------------------

There are no guidelines or limitations for getting involved, if you have an itch
to scratch, scratch it. However, helping out with the current milestone goals
will definetely help the most.

How to contribute is also open to interpretation; testing, forking, documenting,
etc, are all welcome.

You can choose to fork the repository and send pull requests with your changes
or just post links to a patch in the Issue queue.

Nothing is too little.
