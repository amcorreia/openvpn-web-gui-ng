<?php
if (!defined ("LOCAL_SECURITY_KEY"))
 die ();

// OPENVPN-WEB-GUI ________________________

// Change: your company name
$config['Company_Name']          = 'Home Sweet Home';
$config['Company_Logo']          = 'img/OpenVPN-small.gif';
// Change: your company home page
$config['URL_Home_Page']         = 'http://openvpn-web-gui.sourceforge.net/';
$config['AUTH_REALM']            = $config['Company_Name'] .' OpenVPN Web GUI v.0.3.2a';
// What files to include into ZIP
$config['Download']['ZIP']['.pem']    = true;
$config['Download']['ZIP']['.key']    = true;
$config['Download']['ZIP']['.csr']    = false;
// All the following files should be placed into downloads folder
$config['Download']['ZIP']['Others'] = array ();
//$config['Download']['ZIP']['Others'] = array ('readme.txt', 'install.cmd', 'tls-auth.key');

// OPENVPN-WEB-GUI PLUG-INS _______________

// Use the real absolute path here.
$config['PluginsAbsolutePath'] = '/usr/local/www/data-dist/openvpn/plugins/';

// If there are no plugins
//$config['Plugins'] = NULL;
// Otherwise, follow this example:
//$config['Plugins']['PLUGINMANE']['Folder'] = 'FOLDERNAME';

// The post-install helper plugin. Shows if PHP5 has the neccessary functions available
$config['Plugins']['systemcheck']['Folder'] = 'systemcheck';

// OPENVPN ________________________________

// Change: the configuration directory
$config['openvpn']['folder']     = '/usr/local/etc/openvpn/config/';
// Change: configuration and status file names
$config['openvpn']['config']     = $config['openvpn']['folder'] .'openvpn.conf';
$config['openvpn']['status']     = $config['openvpn']['folder'] .'status.log';

// OPENSSL ________________________________

// Change: openssl keys directory
$config['openssl']['folder']     = '/usr/local/etc/openvpn/keys/';
// Change: different folders for Public Certificates, Certificate Requests and Private Keys.
// NOTE: openssl somehow respects only newpem folder (for Public Certificates).
$config['openssl']['pubfolder']  = '/usr/local/etc/openvpn/keys/newpem/';
$config['openssl']['reqfolder']  = '/usr/local/etc/openvpn/keys/newpem/';
$config['openssl']['prvfolder']  = '/usr/local/etc/openvpn/keys/newpem/';
// Change: openssl CA private and public keys
$config['openssl']['CA']['priv'] = 'file://'. $config['openssl']['folder'] .'ca.key';
$config['openssl']['CA']['pub']  = 'file://'. $config['openssl']['folder'] .'ca.crt';
// Change: openssl serial file
$config['openssl']['serial']     = $config['openssl']['folder'] .'serial';
// Change: openssl database
$config['openssl']['database']   = $config['openssl']['folder'] .'database.txt';
// Change: openssl configuration
$config['openssl']['config']     = array ('config'      => $config['openvpn']['folder'] .'openssl.cnf',
                                          'encrypt_key' => 0);
// NEW OPENSSL CERTIFICATE DEFAULTS _________

// Change all of them as it is done in your easy-rsa/vars
$config['openssl']['default']['expiration']             = 3560;
$config['openssl']['default']['countryName']            = 'CA';
$config['openssl']['default']['stateOrProvinceName']    = 'Ontario';
$config['openssl']['default']['localityName']           = 'Mississauga';
$config['openssl']['default']['organizationName']       = 'Home';
$config['openssl']['default']['organizationalUnitName'] = 'Enter Department Name';
$config['openssl']['default']['commonName']             = 'Enter First and Last names';
$config['openssl']['default']['emailAddress']           = 'Enter user@home.on.ca';

?>
