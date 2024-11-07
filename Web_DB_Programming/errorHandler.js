const errorHandler = (err, req, res, next) => {
    const status = err.status || 500;

    switch (status) {
        case 400:
            res.status(status).json({
                error: "Bad Request",
                message: err.message
            });
            break;
        case 401:
            res.status(status).json({
                error: "Unauthorized",
                message: err.message
            });
            break;
        case 403:
            res.status(status).json({
                error: "Forbidden",
                message: err.message
            });
            break;
        case 404:
            res.status(status).json({
                error: "Not Found",
                message: err.message
            });
            break;
        case 500:
            res.status(status).json({
                error: "Internal Server Error",
                message: err.message
            });
            break;
        case 503:
            res.status(status).json({
                error: "Service Unavailable",
                message: err.message
            });
            break;
        default:
            res.status(status).json({
                message: "No Error"
            });
            break;
    }
}

module.exports = errorHandler;
