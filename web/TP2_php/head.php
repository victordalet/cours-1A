<?php


function head_page($title,$description) {
    echo <<<EOF


    <!DOCTYPE html>
    <html>
        <head>
            <meta charset='utf-8'>
            <meta name='Author' CONTENT='Victor Dalet'>
            <meta name='viewport' content='width=device-width, initial-scale=1.0, user-scalable=no'>
            <meta name='description' content=$description>
            <link rel='stylesheet' type='text/css' href='../css/var.css'>
            <link rel='stylesheet' type='text/css' href='https://cdnjs.cloudflare.com/ajax/libs/bootstrap/5.0.2/css/bootstrap.min.css'>
            <title>$title</title>
        </head>

}
EOF;
}


