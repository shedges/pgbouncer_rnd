extern int pgbouncer_init(int is_reboot, int is_verbose, int is_daemon, int is_quiet, 
                   int is_loadbalancer, const char *username, const char *config_file);
extern void main_loop_once(void);
