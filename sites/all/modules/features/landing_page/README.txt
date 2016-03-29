SUMMARY

Landing pages module will let you to select the templates of your
own for a node. It allows to turn off the default css, js provided.
It has an option to include custom js and css. Lets us include our
own tpl files for each page. Another feature is to let the user to
embed views, blocks and form to a node using certain pre-defined
tokens (See TOKEN FILTERS for the predefined tokens).

INSTALLATION

  1. Download, unzip the module and copy it to contrib folder under modules.
  2. Go to Administration » Modules and enable the module.
  3. Make sure you have enabled features, Landing page features and landing page text format,
     along with landing_page module.

CONFIGURATION

Feature 1. Selecting theme for a node:

  1. Scan the new tpl files added,
     There are 2 options to scan newly added tpl files,
      1.1. Put the .tpl.php files to anywhere within the installation or else to the current theme's template folder.
      1.1. At admin/config/content/landing-pages,
        1.1.1. The tpl.php files is within the current theme's template folder, and landing page template files will be scanned by default.
        1.1.2. Or else enter the relative path, see the help text.
      1.3. Later scan with the button.
      1.4. On adding a new tpl file, make sure to re-scan, otherwise you won't take an effect.

  2. Content type landing page at Administration » Structure » Content types » Landing page.
      2.1. See the tpl files scanned in the drop down.
      2.2. Turn off the default css and js using check boxes.
      2.3. Include custom css and js inside the style and script tags for CSS and Header JS fields.
      2.4. For Footer JS, make sure not to include in script tags.
      2.5. For body, select Full HTML as text format.
      2.6. Save the node.

Feature 2. Render form, web form, blocks and views in a node.

  1. Select the filter for text format,
     1.1. From Administration » Configuration » Text formats » landing_page
     1.2. To the right, click on configure.
     1.3. Under enabled filters, select Landing page filter and save.

  2. Render view, blocks and forms,
    2.1. To render view blocks, custom blocks and system blocks, format is [block:module_name:block_id].
    2.2. For drupal forms and web forms, expected format is [webform:node_id].
    2.3. [form:form_id] for the drupal forms.
    2.5. At least a single white space is expected between the token and contents.
    2.4. Make sure to select landing page as the filter type.

TOKEN FILTERS

1. For view blocks, custom blocks, system blocks.
    Format - [block:module_name:block_id]
2. For drupal web forms.
    Format - [webform:webform_node_id]
3. For drupal forms.
    Format - [form:form_id]
