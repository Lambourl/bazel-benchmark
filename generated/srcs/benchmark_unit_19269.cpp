#include "bench/fib.hpp"

// RE Benchmark TU 19269 of 20000 (depth=28, stamp="default")
namespace bench_tu_19269 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19269>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19269
