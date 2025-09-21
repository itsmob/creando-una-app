import url from "node:url";

export function procesarSolicitud(req, res) {

  const parsedUrl = url.parse(req.url, true);

  // Configurar header de la respuesta respuesta
  res.setHeader("Content-Type", "text/plain");
  // Configura el codigo re la respuesta
  res.statusCode = 200;

  // Verificar si es GET en la ruta principal
  if (req.method === "GET" && parsedUrl.pathname === "/hola") {
    
    // Enviar respuesta
    res.end("Holaaaaaaa (=\n");
  } else {
    // Responder con 404 para otras rutas/métodos
    res.statusCode = 404;
    res.end("Ruta no encontrada\n");
  }
}

export function listenActions() {
     console.log(`Servidor ejecutándose en http://localhost:8080/`);
}
