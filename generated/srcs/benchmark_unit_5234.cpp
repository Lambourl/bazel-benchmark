#include "bench/fib.hpp"

// RE Benchmark TU 5234 of 20000 (depth=28, stamp="default")
namespace bench_tu_5234 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5234>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5234
