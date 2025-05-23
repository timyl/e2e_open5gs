/*
 * Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef SMF_BINDING_H
#define SMF_BINDING_H

#include "context.h"

#ifdef __cplusplus
extern "C" {
#endif

void smf_bearer_binding(smf_sess_t *sess);
int smf_gtp2_send_create_bearer_request(smf_bearer_t *bearer);
int smf_gtp2_send_update_bearer_request(smf_bearer_t *bearer);

void smf_qos_flow_binding(smf_sess_t *sess); //默认
//void smf_qos_flow_binding(smf_sess_t *sess, bool default_rules_updated);

#ifdef __cplusplus
}
#endif

#endif /* SMF_BINDING_H */
