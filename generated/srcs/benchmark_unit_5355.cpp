#include "bench/fib.hpp"

// RE Benchmark TU 5355 of 20000 (depth=28, stamp="default")
namespace bench_tu_5355 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5355>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5355
