import http from "node:http";

const server = http.createServer();

server.on("request", procesarSolicitud);
