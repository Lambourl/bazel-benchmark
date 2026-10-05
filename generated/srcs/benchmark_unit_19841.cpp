#include "bench/fib.hpp"

// RE Benchmark TU 19841 of 20000 (depth=28, stamp="default")
namespace bench_tu_19841 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19841>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19841
