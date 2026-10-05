#include "bench/fib.hpp"

// RE Benchmark TU 19434 of 20000 (depth=28, stamp="default")
namespace bench_tu_19434 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19434>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19434
