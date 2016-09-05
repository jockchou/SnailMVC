namespace SnailMVC;

interface AppInterface
{
    const VERSION = "1.0.0-dev";

    public function get(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function post(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function put(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function head(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function options(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function delete(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function any(string pattern, callable handleFunc) -> <ApplicationInterface>;

    public function run() -> void;
    
}
