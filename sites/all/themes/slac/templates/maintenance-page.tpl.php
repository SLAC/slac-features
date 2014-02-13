<!DOCTYPE html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js"> <!--<![endif]-->
<head>
<?php print $head; ?>
<title><?php print $head_title; ?></title>
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
/*WARNING++++++++++++++++++++++++++++++++++++++++++++ */
/*DO NOT EDIT styles.css file, this should be generated only by compliler */
/*Propeople INC, SLAC Project */
html, body, div, span, applet, object, iframe, h1, h2, h3, h4, h5, h6, p, blockquote, pre, a, abbr, acronym, address, big, cite, code, del, dfn, em, img, ins, kbd, q, s, samp, small, strike, strong, sub, sup, tt, var, b, u, i, center, dl, dt, dd, ol, ul, li, fieldset, form, label, legend, table, caption, tbody, tfoot, thead, tr, th, td, article, aside, canvas, details, embed, figure, figcaption, footer, header, hgroup, menu, nav, output, ruby, section, summary, time, mark, audio, video {
  margin: 0;
  padding: 0;
  border: 0;
  font: inherit;
  font-size: 100%;
  vertical-align: baseline;
  outline: 0 none; }

audio,
canvas,
video {
  display: inline-block; }

ol, ul {
  list-style: none; }

table {
  border-collapse: collapse;
  border-spacing: 0; }

caption, th, td {
  text-align: left;
  font-weight: normal;
  vertical-align: middle; }

q, blockquote {
  quotes: none; }

q:before, q:after, blockquote:before, blockquote:after {
  content: "";
  content: none; }

a img {
  border: none; }

article, aside, details, figcaption, figure, footer, header, hgroup, menu, nav, section, summary {
  display: block; }

img {
  height: auto; }

img, object, embed {
  max-width: 100%; }

a[href*='mailto:'] {
  word-break: break-all; }

html {
  font-family: sans-serif;
}
  
.logo {
  background-color: #871628;
  display: block;
  padding: 20px 0;
}

.logo img {
  
}



h1 {
  font-size: 2em;
  padding: 1em 0;
}

.container {
  text-align: center;
  
}

</style>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<!--[if lt IE 7]>
    <p class="chromeframe">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> or <a href="http://www.google.com/chromeframe/?redirect=true">activate Google Chrome Frame</a> to improve your experience.</p>
<![endif]-->  


<div class="container">
<a href="/" class="logo"><img src="<?php echo $logo;?>" alt="Logo"></a>
<h1><?php echo $site_name;?></h1>
<article><p><?php echo $content; ?></p></article>
</div>
</body>
</html>