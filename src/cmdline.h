/* cmdline.h */

/* File autogenerated by gengetopt version 2.19rc  */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_VERSION
#define CMDLINE_PARSER_VERSION VERSION
#endif

struct gengetopt_args_info
{
  const char *help_help; /* Print help and exit help description.  */
  const char *version_help; /* Print version and exit help description.  */
  int fg_flag;	/* Run in foreground (default=off).  */
  const char *fg_help; /* Run in foreground help description.  */
  int debug_flag;	/* Run in debug mode (default=off).  */
  const char *debug_help; /* Run in debug mode help description.  */
  int debugfacility_arg;	/* Which modules to print debug messages for (default='1').  */
  char * debugfacility_orig;	/* Which modules to print debug messages for original value given at command line.  */
  const char *debugfacility_help; /* Which modules to print debug messages for help description.  */
  int logfacility_arg;	/* Which modules to print debug messages for (default='-1').  */
  char * logfacility_orig;	/* Which modules to print debug messages for original value given at command line.  */
  const char *logfacility_help; /* Which modules to print debug messages for help description.  */
  char * conf_arg;	/* Read configuration file (default='/etc/chilli.conf').  */
  char * conf_orig;	/* Read configuration file original value given at command line.  */
  const char *conf_help; /* Read configuration file help description.  */
  int interval_arg;	/* Re-read configuration file at this interval (default='3600').  */
  char * interval_orig;	/* Re-read configuration file at this interval original value given at command line.  */
  const char *interval_help; /* Re-read configuration file at this interval help description.  */
  char * pidfile_arg;	/* Filename of process id file (default='/var/run/chilli.pid').  */
  char * pidfile_orig;	/* Filename of process id file original value given at command line.  */
  const char *pidfile_help; /* Filename of process id file help description.  */
  char * statedir_arg;	/* Directory of nonvolatile data (default='/var/lib/chilli/').  */
  char * statedir_orig;	/* Directory of nonvolatile data original value given at command line.  */
  const char *statedir_help; /* Directory of nonvolatile data help description.  */
  char * net_arg;	/* Network (default='192.168.182.0/24').  */
  char * net_orig;	/* Network original value given at command line.  */
  const char *net_help; /* Network help description.  */
  int dhcpstart_arg;	/* Network DHCP Starting IP (default='10').  */
  char * dhcpstart_orig;	/* Network DHCP Starting IP original value given at command line.  */
  const char *dhcpstart_help; /* Network DHCP Starting IP help description.  */
  int dhcpend_arg;	/* Network DHCP Ending IP (default='254').  */
  char * dhcpend_orig;	/* Network DHCP Ending IP original value given at command line.  */
  const char *dhcpend_help; /* Network DHCP Ending IP help description.  */
  char * dynip_arg;	/* Dynamic IP address pool.  */
  char * dynip_orig;	/* Dynamic IP address pool original value given at command line.  */
  const char *dynip_help; /* Dynamic IP address pool help description.  */
  char * statip_arg;	/* Static IP address pool.  */
  char * statip_orig;	/* Static IP address pool original value given at command line.  */
  const char *statip_help; /* Static IP address pool help description.  */
  char * dns1_arg;	/* Primary DNS server IP address.  */
  char * dns1_orig;	/* Primary DNS server IP address original value given at command line.  */
  const char *dns1_help; /* Primary DNS server IP address help description.  */
  char * dns2_arg;	/* Secondary DNS server IP address.  */
  char * dns2_orig;	/* Secondary DNS server IP address original value given at command line.  */
  const char *dns2_help; /* Secondary DNS server IP address help description.  */
  char * domain_arg;	/* Domain to use for DNS lookups (default='coova.org').  */
  char * domain_orig;	/* Domain to use for DNS lookups original value given at command line.  */
  const char *domain_help; /* Domain to use for DNS lookups help description.  */
  char * ipup_arg;	/* Script to run after link-up.  */
  char * ipup_orig;	/* Script to run after link-up original value given at command line.  */
  const char *ipup_help; /* Script to run after link-up help description.  */
  char * ipdown_arg;	/* Script to run after link-down.  */
  char * ipdown_orig;	/* Script to run after link-down original value given at command line.  */
  const char *ipdown_help; /* Script to run after link-down help description.  */
  char * conup_arg;	/* Script to run after user logon.  */
  char * conup_orig;	/* Script to run after user logon original value given at command line.  */
  const char *conup_help; /* Script to run after user logon help description.  */
  char * condown_arg;	/* Script to run after user logoff.  */
  char * condown_orig;	/* Script to run after user logoff original value given at command line.  */
  const char *condown_help; /* Script to run after user logoff help description.  */
  int txqlen_arg;	/* TX Queue length for tun interface (linux only) (default='100').  */
  char * txqlen_orig;	/* TX Queue length for tun interface (linux only) original value given at command line.  */
  const char *txqlen_help; /* TX Queue length for tun interface (linux only) help description.  */
  char * radiuslisten_arg;	/* IP address to send from.  */
  char * radiuslisten_orig;	/* IP address to send from original value given at command line.  */
  const char *radiuslisten_help; /* IP address to send from help description.  */
  char * radiusserver1_arg;	/* IP address of radius server 1.  */
  char * radiusserver1_orig;	/* IP address of radius server 1 original value given at command line.  */
  const char *radiusserver1_help; /* IP address of radius server 1 help description.  */
  char * radiusserver2_arg;	/* IP address of radius server 2.  */
  char * radiusserver2_orig;	/* IP address of radius server 2 original value given at command line.  */
  const char *radiusserver2_help; /* IP address of radius server 2 help description.  */
  int radiusauthport_arg;	/* Authentication UDP port of radius server (default='1812').  */
  char * radiusauthport_orig;	/* Authentication UDP port of radius server original value given at command line.  */
  const char *radiusauthport_help; /* Authentication UDP port of radius server help description.  */
  int radiusacctport_arg;	/* Accounting UDP port of radius server (default='1813').  */
  char * radiusacctport_orig;	/* Accounting UDP port of radius server original value given at command line.  */
  const char *radiusacctport_help; /* Accounting UDP port of radius server help description.  */
  char * radiussecret_arg;	/* Radius shared secret.  */
  char * radiussecret_orig;	/* Radius shared secret original value given at command line.  */
  const char *radiussecret_help; /* Radius shared secret help description.  */
  char * radiusnasid_arg;	/* Radius NAS-Identifier (default='nas01').  */
  char * radiusnasid_orig;	/* Radius NAS-Identifier original value given at command line.  */
  const char *radiusnasid_help; /* Radius NAS-Identifier help description.  */
  char * radiuslocationid_arg;	/* WISPr Location ID.  */
  char * radiuslocationid_orig;	/* WISPr Location ID original value given at command line.  */
  const char *radiuslocationid_help; /* WISPr Location ID help description.  */
  char * radiuslocationname_arg;	/* WISPr Location Name.  */
  char * radiuslocationname_orig;	/* WISPr Location Name original value given at command line.  */
  const char *radiuslocationname_help; /* WISPr Location Name help description.  */
  int radiusnasporttype_arg;	/* Radius NAS-Port-Type (default='19').  */
  char * radiusnasporttype_orig;	/* Radius NAS-Port-Type original value given at command line.  */
  const char *radiusnasporttype_help; /* Radius NAS-Port-Type help description.  */
  int coaport_arg;	/* Radius disconnect port to listen to (default='0').  */
  char * coaport_orig;	/* Radius disconnect port to listen to original value given at command line.  */
  const char *coaport_help; /* Radius disconnect port to listen to help description.  */
  int coanoipcheck_flag;	/* Allow radius disconnect from any IP (default=off).  */
  const char *coanoipcheck_help; /* Allow radius disconnect from any IP help description.  */
  char * proxylisten_arg;	/* IP address to listen to.  */
  char * proxylisten_orig;	/* IP address to listen to original value given at command line.  */
  const char *proxylisten_help; /* IP address to listen to help description.  */
  int proxyport_arg;	/* UDP port to listen to (default='0').  */
  char * proxyport_orig;	/* UDP port to listen to original value given at command line.  */
  const char *proxyport_help; /* UDP port to listen to help description.  */
  char * proxyclient_arg;	/* IP address of proxy client(s).  */
  char * proxyclient_orig;	/* IP address of proxy client(s) original value given at command line.  */
  const char *proxyclient_help; /* IP address of proxy client(s) help description.  */
  char * proxysecret_arg;	/* Radius proxy shared secret.  */
  char * proxysecret_orig;	/* Radius proxy shared secret original value given at command line.  */
  const char *proxysecret_help; /* Radius proxy shared secret help description.  */
  char * dhcpif_arg;	/* Local Ethernet interface.  */
  char * dhcpif_orig;	/* Local Ethernet interface original value given at command line.  */
  const char *dhcpif_help; /* Local Ethernet interface help description.  */
  char * dhcpmac_arg;	/* Interface MAC address.  */
  char * dhcpmac_orig;	/* Interface MAC address original value given at command line.  */
  const char *dhcpmac_help; /* Interface MAC address help description.  */
  int lease_arg;	/* Lease time to allocate to clients (default='600').  */
  char * lease_orig;	/* Lease time to allocate to clients original value given at command line.  */
  const char *lease_help; /* Lease time to allocate to clients help description.  */
  int eapolenable_flag;	/* Enable IEEE 802.1x authentication (default=off).  */
  const char *eapolenable_help; /* Enable IEEE 802.1x authentication help description.  */
  char * uamserver_arg;	/* URL of authentication web server.  */
  char * uamserver_orig;	/* URL of authentication web server original value given at command line.  */
  const char *uamserver_help; /* URL of authentication web server help description.  */
  char * uamhomepage_arg;	/* URL of homepage to redirect unauthenticated users to.  */
  char * uamhomepage_orig;	/* URL of homepage to redirect unauthenticated users to original value given at command line.  */
  const char *uamhomepage_help; /* URL of homepage to redirect unauthenticated users to help description.  */
  char * uamsecret_arg;	/* Shared secret between uamserver and chilli.  */
  char * uamsecret_orig;	/* Shared secret between uamserver and chilli original value given at command line.  */
  const char *uamsecret_help; /* Shared secret between uamserver and chilli help description.  */
  char * uamlisten_arg;	/* IP address to listen to for authentication requests.  */
  char * uamlisten_orig;	/* IP address to listen to for authentication requests original value given at command line.  */
  const char *uamlisten_help; /* IP address to listen to for authentication requests help description.  */
  int uamport_arg;	/* TCP port to bind to for authentication requests (default='3990').  */
  char * uamport_orig;	/* TCP port to bind to for authentication requests original value given at command line.  */
  const char *uamport_help; /* TCP port to bind to for authentication requests help description.  */
  int uamuiport_arg;	/* TCP port to bind to for UAM UI requests (default='3991').  */
  char * uamuiport_orig;	/* TCP port to bind to for UAM UI requests original value given at command line.  */
  const char *uamuiport_help; /* TCP port to bind to for UAM UI requests help description.  */
  char ** uamallowed_arg;	/* Domain names exempt from access check .  */
  char ** uamallowed_orig;	/* Domain names exempt from access check  original value given at command line.  */
  int uamallowed_min; /* Domain names exempt from access check 's minimum occurreces */
  int uamallowed_max; /* Domain names exempt from access check 's maximum occurreces */
  const char *uamallowed_help; /* Domain names exempt from access check  help description.  */
  int uamanydns_flag;	/* Allow client to use any DNS server (default=off).  */
  const char *uamanydns_help; /* Allow client to use any DNS server help description.  */
  int uamanyip_flag;	/* Allow client to use any IP Address (default=off).  */
  const char *uamanyip_help; /* Allow client to use any IP Address help description.  */
  int nouamsuccess_flag;	/* Do not return to the UAM server on success, original url instead (default=off).  */
  const char *nouamsuccess_help; /* Do not return to the UAM server on success, original url instead help description.  */
  int nouamwispr_flag;	/* Do not send WISPr XML from ChilliSpot, assume back-end does (default=off).  */
  const char *nouamwispr_help; /* Do not send WISPr XML from ChilliSpot, assume back-end does help description.  */
  char * uamlogoutip_arg;	/* HTTP Auto-Logout IP Address (default='1.1.1.1').  */
  char * uamlogoutip_orig;	/* HTTP Auto-Logout IP Address original value given at command line.  */
  const char *uamlogoutip_help; /* HTTP Auto-Logout IP Address help description.  */
  long defsessiontimeout_arg;	/* Default session-timeout if not returned by RADIUS (default='0').  */
  char * defsessiontimeout_orig;	/* Default session-timeout if not returned by RADIUS original value given at command line.  */
  const char *defsessiontimeout_help; /* Default session-timeout if not returned by RADIUS help description.  */
  int defidletimeout_arg;	/* Default idle-timeout if not returned by RADIUS (default='0').  */
  char * defidletimeout_orig;	/* Default idle-timeout if not returned by RADIUS original value given at command line.  */
  const char *defidletimeout_help; /* Default idle-timeout if not returned by RADIUS help description.  */
  int macauth_flag;	/* Authenticate based on MAC address (default=off).  */
  const char *macauth_help; /* Authenticate based on MAC address help description.  */
  char ** macallowed_arg;	/* List of allowed MAC addresses.  */
  char ** macallowed_orig;	/* List of allowed MAC addresses original value given at command line.  */
  int macallowed_min; /* List of allowed MAC addresses's minimum occurreces */
  int macallowed_max; /* List of allowed MAC addresses's maximum occurreces */
  const char *macallowed_help; /* List of allowed MAC addresses help description.  */
  char * macsuffix_arg;	/* Suffix to add to the MAC address.  */
  char * macsuffix_orig;	/* Suffix to add to the MAC address original value given at command line.  */
  const char *macsuffix_help; /* Suffix to add to the MAC address help description.  */
  char * macpasswd_arg;	/* Password used when performing MAC authentication.  */
  char * macpasswd_orig;	/* Password used when performing MAC authentication original value given at command line.  */
  const char *macpasswd_help; /* Password used when performing MAC authentication help description.  */
  int macallowlocal_flag;	/* Do not use RADIUS for authenticating the macallowed (default=off).  */
  const char *macallowlocal_help; /* Do not use RADIUS for authenticating the macallowed help description.  */
  char * wwwdir_arg;	/* Local content served by chilli (for splash page, etc).  */
  char * wwwdir_orig;	/* Local content served by chilli (for splash page, etc) original value given at command line.  */
  const char *wwwdir_help; /* Local content served by chilli (for splash page, etc) help description.  */
  char * wwwbin_arg;	/* Script binary (such as haserl) for simple web programming.  */
  char * wwwbin_orig;	/* Script binary (such as haserl) for simple web programming original value given at command line.  */
  const char *wwwbin_help; /* Script binary (such as haserl) for simple web programming help description.  */
  char * uamui_arg;	/* Program in inetd style to handle all uam requests.  */
  char * uamui_orig;	/* Program in inetd style to handle all uam requests original value given at command line.  */
  const char *uamui_help; /* Program in inetd style to handle all uam requests help description.  */
  char * adminuser_arg;	/* RADIUS administrative user login username.  */
  char * adminuser_orig;	/* RADIUS administrative user login username original value given at command line.  */
  const char *adminuser_help; /* RADIUS administrative user login username help description.  */
  char * adminpasswd_arg;	/* RADIUS administrative user login password.  */
  char * adminpasswd_orig;	/* RADIUS administrative user login password original value given at command line.  */
  const char *adminpasswd_help; /* RADIUS administrative user login password help description.  */
  char * nasmac_arg;	/* Unique MAC address of the NAS (called-station-id).  */
  char * nasmac_orig;	/* Unique MAC address of the NAS (called-station-id) original value given at command line.  */
  const char *nasmac_help; /* Unique MAC address of the NAS (called-station-id) help description.  */
  char * nasip_arg;	/* Unique IP address of the NAS (nas-ip-address).  */
  char * nasip_orig;	/* Unique IP address of the NAS (nas-ip-address) original value given at command line.  */
  const char *nasip_help; /* Unique IP address of the NAS (nas-ip-address) help description.  */
  char * ssid_arg;	/* SSID of the session.  */
  char * ssid_orig;	/* SSID of the session original value given at command line.  */
  const char *ssid_help; /* SSID of the session help description.  */
  char * vlan_arg;	/* VLAN of the session.  */
  char * vlan_orig;	/* VLAN of the session original value given at command line.  */
  const char *vlan_help; /* VLAN of the session help description.  */
  char * cmdsocket_arg;	/* path to the command unix socket.  */
  char * cmdsocket_orig;	/* path to the command unix socket original value given at command line.  */
  const char *cmdsocket_help; /* path to the command unix socket help description.  */
  int swapoctets_flag;	/* Swap the meaning of input/output octets/packets (default=off).  */
  const char *swapoctets_help; /* Swap the meaning of input/output octets/packets help description.  */
  int usestatusfile_flag;	/* Use the status file to keep track of sessions (default=off).  */
  const char *usestatusfile_help; /* Use the status file to keep track of sessions help description.  */
  char * localusers_arg;	/* File keep 'Local' usernames and passwords.  */
  char * localusers_orig;	/* File keep 'Local' usernames and passwords original value given at command line.  */
  const char *localusers_help; /* File keep 'Local' usernames and passwords help description.  */
  char * postauthproxy_arg;	/* IP of an upstream transparent proxy.  */
  char * postauthproxy_orig;	/* IP of an upstream transparent proxy original value given at command line.  */
  const char *postauthproxy_help; /* IP of an upstream transparent proxy help description.  */
  int postauthproxyport_arg;	/* Port of an upstream transparent proxy (default='0').  */
  char * postauthproxyport_orig;	/* Port of an upstream transparent proxy original value given at command line.  */
  const char *postauthproxyport_help; /* Port of an upstream transparent proxy help description.  */
  int wpaguests_flag;	/* Allow WPA 'Guest' access (default=off).  */
  const char *wpaguests_help; /* Allow WPA 'Guest' access help description.  */
  int openidauth_flag;	/* Allow OpenID authentication (default=off).  */
  const char *openidauth_help; /* Allow OpenID authentication help description.  */
  int papalwaysok_flag;	/* Always allow 'PAP' (password) style authentication (default=off).  */
  const char *papalwaysok_help; /* Always allow 'PAP' (password) style authentication help description.  */
  int chillixml_flag;	/* Use ChilliSpot XML in WISPr blocks (default=off).  */
  const char *chillixml_help; /* Use ChilliSpot XML in WISPr blocks help description.  */
  int acctupdate_flag;	/* Allow updating of session attributes in Accounting-Response (default=off).  */
  const char *acctupdate_help; /* Allow updating of session attributes in Accounting-Response help description.  */
  int usetap_flag;	/* Use a TAP instead of TUN (linux only) (default=off).  */
  const char *usetap_help; /* Use a TAP instead of TUN (linux only) help description.  */
  
  int help_given ;	/* Whether help was given.  */
  int version_given ;	/* Whether version was given.  */
  int fg_given ;	/* Whether fg was given.  */
  int debug_given ;	/* Whether debug was given.  */
  int debugfacility_given ;	/* Whether debugfacility was given.  */
  int logfacility_given ;	/* Whether logfacility was given.  */
  int conf_given ;	/* Whether conf was given.  */
  int interval_given ;	/* Whether interval was given.  */
  int pidfile_given ;	/* Whether pidfile was given.  */
  int statedir_given ;	/* Whether statedir was given.  */
  int net_given ;	/* Whether net was given.  */
  int dhcpstart_given ;	/* Whether dhcpstart was given.  */
  int dhcpend_given ;	/* Whether dhcpend was given.  */
  int dynip_given ;	/* Whether dynip was given.  */
  int statip_given ;	/* Whether statip was given.  */
  int dns1_given ;	/* Whether dns1 was given.  */
  int dns2_given ;	/* Whether dns2 was given.  */
  int domain_given ;	/* Whether domain was given.  */
  int ipup_given ;	/* Whether ipup was given.  */
  int ipdown_given ;	/* Whether ipdown was given.  */
  int conup_given ;	/* Whether conup was given.  */
  int condown_given ;	/* Whether condown was given.  */
  int txqlen_given ;	/* Whether txqlen was given.  */
  int radiuslisten_given ;	/* Whether radiuslisten was given.  */
  int radiusserver1_given ;	/* Whether radiusserver1 was given.  */
  int radiusserver2_given ;	/* Whether radiusserver2 was given.  */
  int radiusauthport_given ;	/* Whether radiusauthport was given.  */
  int radiusacctport_given ;	/* Whether radiusacctport was given.  */
  int radiussecret_given ;	/* Whether radiussecret was given.  */
  int radiusnasid_given ;	/* Whether radiusnasid was given.  */
  int radiuslocationid_given ;	/* Whether radiuslocationid was given.  */
  int radiuslocationname_given ;	/* Whether radiuslocationname was given.  */
  int radiusnasporttype_given ;	/* Whether radiusnasporttype was given.  */
  int coaport_given ;	/* Whether coaport was given.  */
  int coanoipcheck_given ;	/* Whether coanoipcheck was given.  */
  int proxylisten_given ;	/* Whether proxylisten was given.  */
  int proxyport_given ;	/* Whether proxyport was given.  */
  int proxyclient_given ;	/* Whether proxyclient was given.  */
  int proxysecret_given ;	/* Whether proxysecret was given.  */
  int dhcpif_given ;	/* Whether dhcpif was given.  */
  int dhcpmac_given ;	/* Whether dhcpmac was given.  */
  int lease_given ;	/* Whether lease was given.  */
  int eapolenable_given ;	/* Whether eapolenable was given.  */
  int uamserver_given ;	/* Whether uamserver was given.  */
  int uamhomepage_given ;	/* Whether uamhomepage was given.  */
  int uamsecret_given ;	/* Whether uamsecret was given.  */
  int uamlisten_given ;	/* Whether uamlisten was given.  */
  int uamport_given ;	/* Whether uamport was given.  */
  int uamuiport_given ;	/* Whether uamuiport was given.  */
  unsigned int uamallowed_given ;	/* Whether uamallowed was given.  */
  int uamanydns_given ;	/* Whether uamanydns was given.  */
  int uamanyip_given ;	/* Whether uamanyip was given.  */
  int nouamsuccess_given ;	/* Whether nouamsuccess was given.  */
  int nouamwispr_given ;	/* Whether nouamwispr was given.  */
  int uamlogoutip_given ;	/* Whether uamlogoutip was given.  */
  int defsessiontimeout_given ;	/* Whether defsessiontimeout was given.  */
  int defidletimeout_given ;	/* Whether defidletimeout was given.  */
  int macauth_given ;	/* Whether macauth was given.  */
  unsigned int macallowed_given ;	/* Whether macallowed was given.  */
  int macsuffix_given ;	/* Whether macsuffix was given.  */
  int macpasswd_given ;	/* Whether macpasswd was given.  */
  int macallowlocal_given ;	/* Whether macallowlocal was given.  */
  int wwwdir_given ;	/* Whether wwwdir was given.  */
  int wwwbin_given ;	/* Whether wwwbin was given.  */
  int uamui_given ;	/* Whether uamui was given.  */
  int adminuser_given ;	/* Whether adminuser was given.  */
  int adminpasswd_given ;	/* Whether adminpasswd was given.  */
  int nasmac_given ;	/* Whether nasmac was given.  */
  int nasip_given ;	/* Whether nasip was given.  */
  int ssid_given ;	/* Whether ssid was given.  */
  int vlan_given ;	/* Whether vlan was given.  */
  int cmdsocket_given ;	/* Whether cmdsocket was given.  */
  int swapoctets_given ;	/* Whether swapoctets was given.  */
  int usestatusfile_given ;	/* Whether usestatusfile was given.  */
  int localusers_given ;	/* Whether localusers was given.  */
  int postauthproxy_given ;	/* Whether postauthproxy was given.  */
  int postauthproxyport_given ;	/* Whether postauthproxyport was given.  */
  int wpaguests_given ;	/* Whether wpaguests was given.  */
  int openidauth_given ;	/* Whether openidauth was given.  */
  int papalwaysok_given ;	/* Whether papalwaysok was given.  */
  int chillixml_given ;	/* Whether chillixml was given.  */
  int acctupdate_given ;	/* Whether acctupdate was given.  */
  int usetap_given ;	/* Whether usetap was given.  */

} ;

extern const char *gengetopt_args_info_purpose;
extern const char *gengetopt_args_info_usage;
extern const char *gengetopt_args_info_help[];

int cmdline_parser (int argc, char * const *argv,
  struct gengetopt_args_info *args_info);
int cmdline_parser2 (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

void cmdline_parser_print_help(void);
void cmdline_parser_print_version(void);

void cmdline_parser_init (struct gengetopt_args_info *args_info);
void cmdline_parser_free (struct gengetopt_args_info *args_info);

int cmdline_parser_configfile (char * const filename,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
