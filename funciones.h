/** \brief Validar numero para el posterior calculo.
 *
 * \param float numero ingresado por el usuario.
 * \return int 1: si el numero es invalido, 0 si es valido.
 */
int validacionNumeros(float);

/** \brief Suma de 2 numeros.
 *
 * \param float operando 1.
 * \param float operando 2.
 * \return float resultado de la suma.
 */
float sumarNumeros(float,float);

/** \brief Resta de 2 numeros.
 *
 * \param float operando 1.
 * \param float operando 2.
 * \return float resultado de la resta.
 */
float restarNumeros(float, float);

/** \brief Division de 2 numeros.
 *
 * \param float operando 1.
 * \param float operando 2.
 * \return float resultado de la division.
 */
float dividirNumeros(float, float);

/** \brief Multiplicacion de 2 numeros.
 *
 * \param float operando 1.
 * \param float operando 2.
 * \return float resultado de la multiplicacion.
 */
float multiplicarNumeros(float,float);


/** \brief Verificar si es un numero entero para la correcta aplicacion de la mascara.
 *
 * \param float numero a verificar
 * \return int 0 si es entero, 1 si no es entero.
 */
int esEntero(float);

/** \brief Calcular el factorial de un numero.
 *
 * \param float numero a calcular,
 * \return unsigned long long int resultado de el factorial.
 *
 */
unsigned long long int factorialNumero(float);
