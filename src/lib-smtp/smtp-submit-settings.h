#ifndef SMTP_SUBMIT_SETTINGS_H
#define SMTP_SUBMIT_SETTINGS_H

struct smtp_submit_settings {
	const char *hostname;

	const char *submission_host;
	const char *sendmail_path;
	unsigned int submission_timeout;
};

extern const struct setting_parser_info smtp_submit_setting_parser_info;

#endif
