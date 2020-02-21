/**************************************************************************************
 * Copyright (c) 2020, Nicholai Bjerke Jensen
 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 *
 * The Eclipse Public License is available at
 *    http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at
 *   http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    Tomoaki Yamaguchi - initial API and implementation 
 *    Nicholai Bjerke Jensen - initial UART driver 
**************************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/select.h>
#include "SensorNetwork.h"
#include "MQTTSNGWProcess.h"


