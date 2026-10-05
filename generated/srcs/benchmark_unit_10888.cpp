#include "bench/fib.hpp"

// RE Benchmark TU 10888 of 20000 (depth=28, stamp="default")
namespace bench_tu_10888 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10888>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10888
